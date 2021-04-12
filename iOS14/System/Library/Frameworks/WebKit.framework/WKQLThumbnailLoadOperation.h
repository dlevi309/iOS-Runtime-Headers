/*
* Generated on Thursday, January 14, 2021 at 2:21:55 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/WebKit.framework/WebKit
*/

#import <WebKit/WebKit-Structs.h>
#import <Foundation/NSOperation.h>

@class NSString, UIImage;

@interface WKQLThumbnailLoadOperation : NSOperation {

	RetainPtr<NSURL>* _filePath;
	RetainPtr<NSString>* _identifier;
	RetainPtr<NSFileWrapper>* _fileWrapper;
	RetainPtr<UIImage>* _thumbnail;
	BOOL _shouldWrite;
	BOOL _executing;
	BOOL _finished;

}

@property (getter=isExecuting) BOOL executing;                             //@synthesize executing=_executing - In the implementation block
@property (getter=isFinished) BOOL finished;                               //@synthesize finished=_finished - In the implementation block
@property (getter=isAsynchronous,readonly) BOOL asynchronous; 
@property (nonatomic,copy,readonly) NSString * identifier; 
@property (nonatomic,retain,readonly) UIImage * thumbnail; 
-(UIImage *)thumbnail;
-(void)start;
-(BOOL)isAsynchronous;
-(BOOL)isFinished;
-(void)setExecuting:(BOOL)arg1 ;
-(void)setFinished:(BOOL)arg1 ;
-(id)initWithAttachment:(id)arg1 identifier:(id)arg2 ;
-(id)initWithURL:(id)arg1 identifier:(id)arg2 ;
-(BOOL)isExecuting;
-(NSString *)identifier;
@end

