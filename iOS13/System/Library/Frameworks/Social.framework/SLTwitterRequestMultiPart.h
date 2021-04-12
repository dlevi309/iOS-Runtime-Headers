/*
* Generated on Monday, March 1, 2021 at 2:31:44 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/Social.framework/Social
*/


@class NSData, NSString;

@interface SLTwitterRequestMultiPart : NSObject {

	NSData* _payload;
	NSString* _name;
	NSString* _type;

}

@property (nonatomic,retain) NSData * payload;              //@synthesize payload=_payload - In the implementation block
@property (nonatomic,copy) NSString * name;                 //@synthesize name=_name - In the implementation block
@property (nonatomic,copy) NSString * type;                 //@synthesize type=_type - In the implementation block
+(id)multipartBoundary;
+(id)multiPartWithName:(id)arg1 payload:(id)arg2 type:(id)arg3 ;
-(NSString *)name;
-(NSString *)type;
-(void)setType:(NSString *)arg1 ;
-(void)setName:(NSString *)arg1 ;
-(void)setPayload:(NSData *)arg1 ;
-(NSData *)payload;
-(id)partData;
-(id)imagePartData;
-(id)formPartData;
@end

