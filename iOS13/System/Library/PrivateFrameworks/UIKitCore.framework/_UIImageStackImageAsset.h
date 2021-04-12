/*
* Generated on Monday, March 1, 2021 at 2:30:15 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(id)initWithData:(id)arg1 ;
-(id)initWithContentsOfFile:(id)arg1 ;
-(id)imageWithConfiguration:(id)arg1 ;
-(void)setStackData:(NSData *)arg1 ;
-(NSData *)stackData;
-(CUICatalog *)catalog;
-(void)setCatalog:(CUICatalog *)arg1 ;
@end

