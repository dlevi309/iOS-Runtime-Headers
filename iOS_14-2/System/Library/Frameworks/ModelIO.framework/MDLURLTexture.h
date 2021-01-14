/*
* Generated on Thursday, January 14, 2021 at 2:26:58 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/ModelIO.framework/ModelIO
*/

#import <ModelIO/MDLTexture.h>

@class NSURL;

@interface MDLURLTexture : MDLTexture {

	NSURL* _url;

}

@property (nonatomic,copy) NSURL * URL; 
-(void)setURL:(NSURL *)arg1 ;
-(NSURL *)URL;
-(id)initWithURL:(id)arg1 name:(id)arg2 ;
@end

