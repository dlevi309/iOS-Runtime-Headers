/*
* Generated on Thursday, January 14, 2021 at 2:24:29 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/Silex.framework/Silex
*/

#import <Silex/Silex-Structs.h>
#import <libobjc.A.dylib/SXQuickLookInteractor.h>
@class SXQuickLookFile;


@protocol SXQuickLookInteractor <NSObject>
@property (nonatomic,readonly) SXQuickLookFile * file; 
@required
-(SXQuickLookFile *)file;
-(void)loadThumbnailWithSize:(CGSize)arg1;

@end


@protocol SXQuickLookInteractorDelegate, SXQuickLookService;
@class SXQuickLookFile, NSString;

@interface SXQuickLookInteractor : NSObject <SXQuickLookInteractor> {

	id<SXQuickLookInteractorDelegate> delegate;
	SXQuickLookFile* _file;
	id<SXQuickLookService> _service;

}

@property (nonatomic,readonly) id<SXQuickLookService> service;                               //@synthesize service=_service - In the implementation block
@property (assign,nonatomic,__weak) id<SXQuickLookInteractorDelegate> delegate; 
@property (nonatomic,readonly) SXQuickLookFile * file;                                       //@synthesize file=_file - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(SXQuickLookFile *)file;
-(id<SXQuickLookInteractorDelegate>)delegate;
-(void)setDelegate:(id<SXQuickLookInteractorDelegate>)arg1 ;
-(id<SXQuickLookService>)service;
-(void)loadThumbnailWithSize:(CGSize)arg1 ;
-(id)initWithFile:(id)arg1 service:(id)arg2 ;
@end

