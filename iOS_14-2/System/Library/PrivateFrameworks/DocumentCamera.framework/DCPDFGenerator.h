/*
* Generated on Thursday, January 14, 2021 at 2:27:39 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/DocumentCamera.framework/DocumentCamera
*/


#import <DocumentCamera/DocumentCamera-Structs.h>
@class NSURL, NSString, NSMutableData;

@interface DCPDFGenerator : NSObject {

	CGContextRef _pdfContext;
	NSURL* _fileURL;
	NSString* _title;
	NSMutableData* _data;
	CGRect _pageRect;

}

@property (nonatomic,copy) NSURL * fileURL;                     //@synthesize fileURL=_fileURL - In the implementation block
@property (nonatomic,copy) NSString * title;                    //@synthesize title=_title - In the implementation block
@property (assign,nonatomic) CGRect pageRect;                   //@synthesize pageRect=_pageRect - In the implementation block
@property (nonatomic,retain) NSMutableData * data;              //@synthesize data=_data - In the implementation block
@property (nonatomic,readonly) NSURL * url; 
-(void)setFileURL:(NSURL *)arg1 ;
-(id)init;
-(CGRect)pageRect;
-(void)setPageRect:(CGRect)arg1 ;
-(void)finishGenerating;
-(void)addPageWithPageRect:(CGRect)arg1 renderBlock:(/*^block*/id)arg2 ;
-(id)initWithURL:(id)arg1 pageRect:(CGRect)arg2 title:(id)arg3 ;
-(id)initWithMutableData:(id)arg1 pageRect:(CGRect)arg2 title:(id)arg3 ;
-(BOOL)startGenerating;
-(void)addPageWithRenderBlock:(/*^block*/id)arg1 ;
-(void)setTitle:(NSString *)arg1 ;
-(NSURL *)url;
-(void)setData:(NSMutableData *)arg1 ;
-(NSURL *)fileURL;
-(NSMutableData *)data;
-(NSString *)title;
-(void)dealloc;
@end

