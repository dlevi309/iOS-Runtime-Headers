/*
* Generated on Monday, March 1, 2021 at 2:34:36 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(NSData *)data;
-(id)propertyList;
-(void)setData:(NSData *)arg1 ;
-(void)setURL:(NSURL *)arg1 ;
-(NSURL *)URL;
-(NSString *)MIMEType;
-(NSString *)textEncodingName;
-(id)initWithData:(id)arg1 URL:(id)arg2 MIMEType:(id)arg3 textEncodingName:(id)arg4 frameName:(id)arg5 ;
-(NSString *)frameName;
-(void)setMIMEType:(NSString *)arg1 ;
-(void)setTextEncodingName:(NSString *)arg1 ;
-(void)setFrameName:(NSString *)arg1 ;
@end

