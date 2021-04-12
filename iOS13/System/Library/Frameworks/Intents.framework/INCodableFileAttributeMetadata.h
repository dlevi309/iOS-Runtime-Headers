/*
* Generated on Monday, March 1, 2021 at 2:31:02 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/Intents.framework/Intents
*/

#import <Intents/INCodableAttributeMetadata.h>

@class NSString, NSArray;

@interface INCodableFileAttributeMetadata : INCodableAttributeMetadata {

	NSString* _type;
	NSArray* _customUTIs;

}

@property (nonatomic,readonly) NSString * type;                   //@synthesize type=_type - In the implementation block
@property (nonatomic,readonly) NSArray * customUTIs;              //@synthesize customUTIs=_customUTIs - In the implementation block
@property (nonatomic,readonly) NSArray * UTIs; 
+(BOOL)supportsSecureCoding;
-(NSString *)type;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)updateWithDictionary:(id)arg1 ;
-(id)dictionaryRepresentationWithLocalizer:(id)arg1 ;
-(NSArray *)UTIs;
-(NSArray *)customUTIs;
@end

