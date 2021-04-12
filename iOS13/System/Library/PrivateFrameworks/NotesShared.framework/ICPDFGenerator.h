/*
* Generated on Monday, March 1, 2021 at 2:33:13 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/NotesShared.framework/NotesShared
*/


#import <NotesShared/NotesShared-Structs.h>
@class NSURL, NSString, NSMutableData;

@interface ICPDFGenerator : NSObject {

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
-(id)init;
-(void)dealloc;
-(NSMutableData *)data;
-(void)setData:(NSMutableData *)arg1 ;
-(NSURL *)url;
-(NSString *)title;
-(void)setTitle:(NSString *)arg1 ;
-(NSURL *)fileURL;
-(void)setFileURL:(NSURL *)arg1 ;
-(void)setPageRect:(CGRect)arg1 ;
-(void)finishGenerating;
-(CGRect)pageRect;
-(void)addPageWithPageRect:(CGRect)arg1 renderBlock:(/*^block*/id)arg2 ;
-(id)initWithURL:(id)arg1 pageRect:(CGRect)arg2 title:(id)arg3 ;
-(id)initWithMutableData:(id)arg1 pageRect:(CGRect)arg2 title:(id)arg3 ;
-(BOOL)startGenerating;
-(void)addPageWithRenderBlock:(/*^block*/id)arg1 ;
@end

