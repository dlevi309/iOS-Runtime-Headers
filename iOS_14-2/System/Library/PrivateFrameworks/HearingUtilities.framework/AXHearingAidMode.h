/*
* Generated on Thursday, January 14, 2021 at 2:26:18 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(int)ear;
-(unsigned char)index;
-(void)setCategory:(long long)arg1 ;
-(void)setIndex:(unsigned char)arg1 ;
-(BOOL)isSelected;
-(void)encodeWithCoder:(id)arg1 ;
-(void)setIsSelected:(BOOL)arg1 ;
-(long long)category;
-(id)initWithRepresentation:(id)arg1 ;
-(NSString *)name;
-(id)description;
-(void)setEar:(int)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)setName:(NSString *)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(void)dealloc;
-(BOOL)isStreamOrMixingStream;
-(id)transportRepresentation;
-(int)syncAttempts;
-(void)setSyncAttempts:(int)arg1 ;
-(BOOL)isMixingStream;
-(BOOL)isStream;
@end

