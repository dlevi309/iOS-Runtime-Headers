/*
* Generated on Thursday, January 14, 2021 at 2:22:57 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SetupAssistant.framework/SetupAssistant
*/


@class NSString;

@interface BYChronicleEntry : NSObject {

	NSString* _productVersion;

}

@property (nonatomic,retain) NSString * productVersion;              //@synthesize productVersion=_productVersion - In the implementation block
-(id)dictionaryRepresentation;
-(id)init;
-(NSString *)productVersion;
-(id)initWithProductVersion:(id)arg1 ;
-(BOOL)isEqualToEntry:(id)arg1 ;
-(BOOL)createdOnCurrentMajorVersion;
-(id)initWithDictionary:(id)arg1 ;
-(void)setProductVersion:(NSString *)arg1 ;
-(id)description;
-(BOOL)isEqual:(id)arg1 ;
@end

