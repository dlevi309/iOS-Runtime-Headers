/*
* Generated on Monday, March 1, 2021 at 2:33:06 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) SXQuickLookFile * file;                                       //@synthesize file=_file - In the implementation block
-(id<SXQuickLookInteractorDelegate>)delegate;
-(void)setDelegate:(id<SXQuickLookInteractorDelegate>)arg1 ;
-(SXQuickLookFile *)file;
-(id<SXQuickLookService>)service;
-(void)loadThumbnailWithSize:(CGSize)arg1 ;
-(id)initWithFile:(id)arg1 service:(id)arg2 ;
@end

