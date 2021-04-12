/*
* Generated on Thursday, January 14, 2021 at 2:27:10 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ActionKit.framework/ActionKit
*/


@class NSData, NSURL, NSString;

@interface ENWebResource : NSObject {

	NSData* _data;
	NSURL* _URL;
	NSString* _MIMEType;
	NSString* _textEncodingName;
	NSString* _frameName;

}

@property (nonatomic,retain) NSData * data;                          //@synthesize data=_data - In the implementation block
@property (nonatomic,retain) NSURL * URL;                            //@synthesize URL=_URL - In the implementation block
@property (nonatomic,copy) NSString * MIMEType;                      //@synthesize MIMEType=_MIMEType - In the implementation block
@property (nonatomic,copy) NSString * textEncodingName;              //@synthesize textEncodingName=_textEncodingName - In the implementation block
@property (nonatomic,copy) NSString * frameName;                     //@synthesize frameName=_frameName - In the implementation block
+(id)webResourceWithDictionary:(id)arg1 ;
-(NSString *)MIMEType;
-(void)setURL:(NSURL *)arg1 ;
-(id)initWithData:(id)arg1 URL:(id)arg2 MIMEType:(id)arg3 textEncodingName:(id)arg4 frameName:(id)arg5 ;
-(void)setData:(NSData *)arg1 ;
-(NSData *)data;
-(NSURL *)URL;
-(void)setMIMEType:(NSString *)arg1 ;
-(id)propertyList;
-(NSString *)frameName;
-(NSString *)textEncodingName;
-(void)setTextEncodingName:(NSString *)arg1 ;
-(void)setFrameName:(NSString *)arg1 ;
@end

