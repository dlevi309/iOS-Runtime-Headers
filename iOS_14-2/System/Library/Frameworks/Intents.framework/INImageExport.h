/*
* Generated on Thursday, January 14, 2021 at 2:21:21 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/Intents.framework/Intents
*/

@class NSString, NSData, NSURL;


@protocol INImageExport <NSObject,JSExport>
@property (nonatomic,copy,readonly) NSString * _identifier; 
@property (setter=_setImageData:,nonatomic,copy) NSData * _imageData; 
@property (setter=_setUri:,nonatomic,copy) NSURL * _uri; 
@property (setter=_setName:,nonatomic,copy) NSString * _name; 
@property (setter=_setBundlePath:,nonatomic,copy) NSString * _bundlePath; 
@required
+(id)imageNamed:(id)arg1;
+(id)imageWithURL:(id)arg1;
+(id)imageWithImageData:(id)arg1;
-(NSURL *)_uri;
-(void)_setName:(id)arg1;
-(id)init;
-(NSString *)_bundlePath;
-(NSString *)_name;
-(NSData *)_imageData;
-(void)_setUri:(id)arg1;
-(void)_setImageData:(id)arg1;
-(NSString *)_identifier;
-(void)_setBundlePath:(id)arg1;

@end

