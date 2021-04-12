/*
* Generated on Thursday, January 14, 2021 at 2:20:26 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/

#import <UIKitCore/UIImageAsset.h>

@class CUICatalog, NSData;

@interface _UIImageStackImageAsset : UIImageAsset {

	CUICatalog* _catalog;
	NSData* _stackData;

}

@property (nonatomic,retain) CUICatalog * catalog;              //@synthesize catalog=_catalog - In the implementation block
@property (nonatomic,copy) NSData * stackData;                  //@synthesize stackData=_stackData - In the implementation block
-(CUICatalog *)catalog;
-(id)initWithContentsOfFile:(id)arg1 ;
-(id)imageWithConfiguration:(id)arg1 ;
-(void)setStackData:(NSData *)arg1 ;
-(id)initWithData:(id)arg1 ;
-(void)setCatalog:(CUICatalog *)arg1 ;
-(NSData *)stackData;
@end

