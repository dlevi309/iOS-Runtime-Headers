/*
* Generated on Thursday, January 14, 2021 at 2:28:25 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SharingUI.framework/SharingUI
*/


@class NSURL, NSData, NSString, UIImage;

@interface SFAirDropPayload : NSObject {

	BOOL _wasString;
	NSURL* _URL;
	NSData* _data;
	NSString* _type;
	UIImage* _previewImage;
	NSString* _payloadDescription;
	long long _identifer;

}

@property (nonatomic,copy) NSURL * URL;                                //@synthesize URL=_URL - In the implementation block
@property (nonatomic,retain) NSData * data;                            //@synthesize data=_data - In the implementation block
@property (nonatomic,copy) NSString * type;                            //@synthesize type=_type - In the implementation block
@property (nonatomic,retain) UIImage * previewImage;                   //@synthesize previewImage=_previewImage - In the implementation block
@property (nonatomic,copy) NSString * payloadDescription;              //@synthesize payloadDescription=_payloadDescription - In the implementation block
@property (assign,nonatomic) long long identifer;                      //@synthesize identifer=_identifer - In the implementation block
@property (assign,nonatomic) BOOL wasString;                           //@synthesize wasString=_wasString - In the implementation block
+(id)newPayloadWithData:(id)arg1 ofType:(id)arg2 description:(id)arg3 previewImage:(id)arg4 identifier:(long long)arg5 ;
+(id)newPayloadWithURL:(id)arg1 description:(id)arg2 previewImage:(id)arg3 identifier:(long long)arg4 ;
-(void)setURL:(NSURL *)arg1 ;
-(void)setIdentifer:(long long)arg1 ;
-(void)setType:(NSString *)arg1 ;
-(void)setData:(NSData *)arg1 ;
-(id)description;
-(long long)identifer;
-(NSData *)data;
-(NSString *)payloadDescription;
-(void)setPreviewImage:(UIImage *)arg1 ;
-(UIImage *)previewImage;
-(NSString *)type;
-(NSURL *)URL;
-(unsigned long long)hash;
-(BOOL)isEqual:(id)arg1 ;
-(void)setPayloadDescription:(NSString *)arg1 ;
-(BOOL)wasString;
-(void)setWasString:(BOOL)arg1 ;
@end

