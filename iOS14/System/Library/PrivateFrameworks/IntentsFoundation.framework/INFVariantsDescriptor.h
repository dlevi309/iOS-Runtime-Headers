/*
* Generated on Thursday, January 14, 2021 at 2:27:49 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/IntentsFoundation.framework/IntentsFoundation
*/

#import <IntentsFoundation/IntentsFoundation-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString;

@interface INFVariantsDescriptor : NSObject <NSCopying> {

	unsigned long long _plurality;
	unsigned long long _gender;

}

@property (assign,nonatomic) unsigned long long plurality;              //@synthesize plurality=_plurality - In the implementation block
@property (assign,nonatomic) unsigned long long gender;                 //@synthesize gender=_gender - In the implementation block
@property (nonatomic,readonly) NSString * dictionaryKey; 
+(id)variant;
+(id)variantWithVariants:(unsigned long long)arg1 ;
-(id)init;
-(NSString *)dictionaryKey;
-(void)setGender:(unsigned long long)arg1 ;
-(unsigned long long)gender;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(id)append:(id)arg1 toString:(id)arg2 ;
-(id)initWithVariants:(unsigned long long)arg1 ;
-(id)variantByRemovingOneAttribute;
-(unsigned long long)plurality;
-(void)setPlurality:(unsigned long long)arg1 ;
@end

