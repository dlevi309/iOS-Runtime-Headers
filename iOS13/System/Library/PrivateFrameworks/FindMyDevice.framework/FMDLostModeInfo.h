/*
* Generated on Monday, March 1, 2021 at 2:32:20 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/FindMyDevice.framework/FindMyDevice
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString;

@interface FMDLostModeInfo : NSObject <NSSecureCoding> {

	BOOL _lostModeEnabled;
	BOOL _disableSlideToUnlock;
	BOOL _facetimeCapable;
	NSString* _message;
	NSString* _phoneNumber;
	unsigned long long _lostModeType;
	NSString* _footnoteText;

}

@property (assign,nonatomic) unsigned long long lostModeType;              //@synthesize lostModeType=_lostModeType - In the implementation block
@property (assign,nonatomic) BOOL lostModeEnabled;                         //@synthesize lostModeEnabled=_lostModeEnabled - In the implementation block
@property (assign,nonatomic) BOOL disableSlideToUnlock;                    //@synthesize disableSlideToUnlock=_disableSlideToUnlock - In the implementation block
@property (nonatomic,retain) NSString * message;                           //@synthesize message=_message - In the implementation block
@property (nonatomic,retain) NSString * phoneNumber;                       //@synthesize phoneNumber=_phoneNumber - In the implementation block
@property (assign,nonatomic) BOOL facetimeCapable;                         //@synthesize facetimeCapable=_facetimeCapable - In the implementation block
@property (nonatomic,retain) NSString * footnoteText;                      //@synthesize footnoteText=_footnoteText - In the implementation block
+(BOOL)supportsSecureCoding;
-(void)dealloc;
-(id)description;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSString *)phoneNumber;
-(NSString *)message;
-(void)setMessage:(NSString *)arg1 ;
-(void)setPhoneNumber:(NSString *)arg1 ;
-(void)setLostModeEnabled:(BOOL)arg1 ;
-(void)setFacetimeCapable:(BOOL)arg1 ;
-(void)setFootnoteText:(NSString *)arg1 ;
-(void)setDisableSlideToUnlock:(BOOL)arg1 ;
-(void)setLostModeType:(unsigned long long)arg1 ;
-(BOOL)lostModeEnabled;
-(unsigned long long)lostModeType;
-(BOOL)disableSlideToUnlock;
-(BOOL)facetimeCapable;
-(NSString *)footnoteText;
@end

