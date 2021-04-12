/*
* Generated on Monday, March 1, 2021 at 2:31:48 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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

