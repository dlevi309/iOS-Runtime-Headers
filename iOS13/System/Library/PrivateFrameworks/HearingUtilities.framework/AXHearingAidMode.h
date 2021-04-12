/*
* Generated on Monday, March 1, 2021 at 2:32:53 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/HearingUtilities.framework/HearingUtilities
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString;

@interface AXHearingAidMode : NSObject <NSSecureCoding> {

	unsigned char _index;
	BOOL _isSelected;
	int _ear;
	int syncAttempts;
	NSString* _name;
	long long _category;

}

@property (nonatomic,copy) NSString * name;                    //@synthesize name=_name - In the implementation block
@property (assign,nonatomic) long long category;               //@synthesize category=_category - In the implementation block
@property (assign,nonatomic) unsigned char index;              //@synthesize index=_index - In the implementation block
@property (assign,nonatomic) BOOL isSelected;                  //@synthesize isSelected=_isSelected - In the implementation block
@property (assign,nonatomic) int ear;                          //@synthesize ear=_ear - In the implementation block
@property (assign,nonatomic) int syncAttempts; 
+(BOOL)supportsSecureCoding;
-(void)dealloc;
-(BOOL)isEqual:(id)arg1 ;
-(id)description;
-(NSString *)name;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)setName:(NSString *)arg1 ;
-(long long)category;
-(void)setCategory:(long long)arg1 ;
-(unsigned char)index;
-(BOOL)isSelected;
-(void)setIsSelected:(BOOL)arg1 ;
-(void)setIndex:(unsigned char)arg1 ;
-(id)initWithRepresentation:(id)arg1 ;
-(BOOL)isStream;
-(void)setEar:(int)arg1 ;
-(int)ear;
-(BOOL)isStreamOrMixingStream;
-(id)transportRepresentation;
-(int)syncAttempts;
-(void)setSyncAttempts:(int)arg1 ;
-(BOOL)isMixingStream;
@end

