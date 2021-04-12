/*
* Generated on Monday, March 1, 2021 at 2:31:49 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
*/


#import <ChatKit/ChatKit-Structs.h>
@class NSData, NSURL, UIImage, NSString;

@interface CKImageData : NSObject {

	CGImageSourceRef _imageSource;
	unsigned long long _count;
	long long _orientation;
	CGSize _pxSize;
	BOOL _initializedProperties;
	NSData* _data;
	NSURL* _url;
	UIImage* _image;

}

@property (nonatomic,retain) NSData * data;                           //@synthesize data=_data - In the implementation block
@property (nonatomic,retain) NSURL * url;                             //@synthesize url=_url - In the implementation block
@property (nonatomic,retain) UIImage * image;                         //@synthesize image=_image - In the implementation block
@property (nonatomic,readonly) CGSize ptSize; 
@property (nonatomic,readonly) CGSize pxSize; 
@property (nonatomic,copy,readonly) NSString * UTIType; 
@property (nonatomic,copy,readonly) NSString * MIMEType; 
@property (nonatomic,readonly) long long orientation; 
@property (nonatomic,readonly) unsigned long long count; 
+(BOOL)supportsASTC;
+(id)UTITypeForData:(id)arg1 ;
-(void)dealloc;
-(unsigned long long)count;
-(id)initWithURL:(id)arg1 ;
-(id)initWithData:(id)arg1 ;
-(NSData *)data;
-(void)setData:(NSData *)arg1 ;
-(NSURL *)url;
-(long long)orientation;
-(NSString *)MIMEType;
-(UIImage *)image;
-(void)setImage:(UIImage *)arg1 ;
-(void)setUrl:(NSURL *)arg1 ;
-(void)_initializeProperties;
-(NSString *)UTIType;
-(id)durationsWithMaxCount:(unsigned long long)arg1 ;
-(CGSize)ptSize;
-(id)thumbnailAtIndex:(unsigned long long)arg1 fillToSize:(CGSize)arg2 maxCount:(unsigned long long)arg3 ;
-(id)thumbnailFillToSize:(CGSize)arg1 ;
-(CGSize)pxSize;
-(id)thumbnailsFillToSize:(CGSize)arg1 maxCount:(unsigned long long)arg2 ;
-(id)_thumbnailFitToSize:(CGSize)arg1 atIndex:(unsigned long long)arg2 ;
-(id)_thumbnailFillToSize:(CGSize)arg1 atIndex:(unsigned long long)arg2 ;
-(id)_defaultDurationsWithMaxCount:(unsigned long long)arg1 ;
-(id)thumbnailFitToSize:(CGSize)arg1 ;
-(id)thumbnailFillToSizeCropping:(CGSize)arg1 ;
-(id)thumbnailsFitToSize:(CGSize)arg1 maxCount:(unsigned long long)arg2 ;
@end

