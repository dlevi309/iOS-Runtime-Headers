/*
* Generated on Monday, March 1, 2021 at 2:31:33 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SetupAssistant.framework/SetupAssistant
*/


@class NSString;

@interface BYChronicleEntry : NSObject {

	NSString* _productVersion;

}

@property (nonatomic,retain) NSString * productVersion;              //@synthesize productVersion=_productVersion - In the implementation block
-(id)init;
-(BOOL)isEqual:(id)arg1 ;
-(id)description;
-(id)initWithDictionary:(id)arg1 ;
-(id)dictionaryRepresentation;
-(NSString *)productVersion;
-(void)setProductVersion:(NSString *)arg1 ;
-(id)initWithProductVersion:(id)arg1 ;
-(BOOL)isEqualToEntry:(id)arg1 ;
-(BOOL)createdOnCurrentMajorVersion;
@end

