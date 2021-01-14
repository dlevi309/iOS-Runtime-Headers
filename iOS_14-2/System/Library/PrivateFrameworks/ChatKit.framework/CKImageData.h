/*
* Generated on Thursday, January 14, 2021 at 2:21:30 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
+(id)UTITypeForData:(id)arg1 ;
+(BOOL)supportsASTC;
-(NSString *)MIMEType;
-(CGSize)pxSize;
-(void)setImage:(UIImage *)arg1 ;
-(id)initWithURL:(id)arg1 ;
-(CGSize)ptSize;
-(id)thumbnailFillToSize:(CGSize)arg1 ;
-(unsigned long long)count;
-(id)initWithData:(id)arg1 ;
-(id)thumbnailsFillToSize:(CGSize)arg1 maxCount:(unsigned long long)arg2 ;
-(NSURL *)url;
-(UIImage *)image;
-(NSString *)UTIType;
-(void)setData:(NSData *)arg1 ;
-(id)_thumbnailFitToSize:(CGSize)arg1 atIndex:(unsigned long long)arg2 ;
-(id)_thumbnailFillToSize:(CGSize)arg1 atIndex:(unsigned long long)arg2 ;
-(id)_defaultDurationsWithMaxCount:(unsigned long long)arg1 ;
-(id)thumbnailFitToSize:(CGSize)arg1 ;
-(id)thumbnailFillToSizeCropping:(CGSize)arg1 ;
-(id)thumbnailsFitToSize:(CGSize)arg1 maxCount:(unsigned long long)arg2 ;
-(void)_initializeProperties;
-(NSData *)data;
-(void)setUrl:(NSURL *)arg1 ;
-(long long)orientation;
-(id)durationsWithMaxCount:(unsigned long long)arg1 ;
-(id)thumbnailAtIndex:(unsigned long long)arg1 fillToSize:(CGSize)arg2 maxCount:(unsigned long long)arg3 ;
-(void)dealloc;
@end

