/*
* Generated on Monday, March 1, 2021 at 2:31:44 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/Social.framework/Social
*/


@class NSData, NSString;

@interface SLRequestMultiPart : NSObject {

	NSData* _payload;
	NSString* _name;
	NSString* _type;
	NSString* _uniqueIdentifier;
	NSString* _multiPartBoundary;
	NSString* _filename;

}

@property (nonatomic,readonly) NSString * uniqueIdentifier; 
@property (nonatomic,retain) NSData * payload;                           //@synthesize payload=_payload - In the implementation block
@property (nonatomic,copy) NSString * name;                              //@synthesize name=_name - In the implementation block
@property (nonatomic,copy) NSString * type;                              //@synthesize type=_type - In the implementation block
@property (nonatomic,copy) NSString * filename;                          //@synthesize filename=_filename - In the implementation block
@property (nonatomic,copy) NSString * multiPartBoundary;                 //@synthesize multiPartBoundary=_multiPartBoundary - In the implementation block
+(id)multiPartWithName:(id)arg1 payload:(id)arg2 type:(id)arg3 multiPartBoundary:(id)arg4 ;
-(unsigned long long)length;
-(NSString *)name;
-(NSString *)type;
-(void)setType:(NSString *)arg1 ;
-(void)setName:(NSString *)arg1 ;
-(NSString *)uniqueIdentifier;
-(NSString *)filename;
-(void)setFilename:(NSString *)arg1 ;
-(void)setPayload:(NSData *)arg1 ;
-(NSData *)payload;
-(void)setMultiPartBoundary:(NSString *)arg1 ;
-(NSString *)multiPartBoundary;
-(id)partData;
-(id)payloadPreamble;
-(id)payloadEpilogue;
-(id)multiPartHeader;
@end

