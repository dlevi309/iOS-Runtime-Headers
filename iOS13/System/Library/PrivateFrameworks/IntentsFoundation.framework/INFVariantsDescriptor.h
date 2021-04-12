/*
* Generated on Monday, March 1, 2021 at 2:34:25 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(BOOL)isEqual:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(unsigned long long)gender;
-(void)setGender:(unsigned long long)arg1 ;
-(NSString *)dictionaryKey;
-(id)append:(id)arg1 toString:(id)arg2 ;
-(id)initWithVariants:(unsigned long long)arg1 ;
-(id)variantByRemovingOneAttribute;
-(unsigned long long)plurality;
-(void)setPlurality:(unsigned long long)arg1 ;
@end

