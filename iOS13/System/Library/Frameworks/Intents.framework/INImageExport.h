/*
* Generated on Monday, March 1, 2021 at 2:31:02 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
+(id)imageWithImageData:(id)arg1;
+(id)imageWithURL:(id)arg1;
-(id)init;
-(NSString *)_name;
-(NSString *)_identifier;
-(NSURL *)_uri;
-(NSString *)_bundlePath;
-(void)_setName:(id)arg1;
-(NSData *)_imageData;
-(void)_setImageData:(id)arg1;
-(void)_setUri:(id)arg1;
-(void)_setBundlePath:(id)arg1;

@end

