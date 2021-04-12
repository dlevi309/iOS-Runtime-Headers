/*
* Generated on Thursday, January 14, 2021 at 2:26:42 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(void)setPayload:(NSData *)arg1 ;
-(NSString *)filename;
-(NSString *)uniqueIdentifier;
-(unsigned long long)length;
-(void)setType:(NSString *)arg1 ;
-(NSData *)payload;
-(NSString *)name;
-(void)setFilename:(NSString *)arg1 ;
-(NSString *)type;
-(void)setName:(NSString *)arg1 ;
-(void)setMultiPartBoundary:(NSString *)arg1 ;
-(NSString *)multiPartBoundary;
-(id)partData;
-(id)payloadPreamble;
-(id)payloadEpilogue;
-(id)multiPartHeader;
@end

