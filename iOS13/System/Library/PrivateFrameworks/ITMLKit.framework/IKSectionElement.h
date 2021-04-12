/*
* Generated on Monday, March 1, 2021 at 2:31:55 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/ITMLKit.framework/ITMLKit
*/

#import <ITMLKit/IKDataSourceElement.h>

@class NSArray, IKHeaderElement, IKViewElement;

@interface IKSectionElement : IKDataSourceElement {

	NSArray* _items;

}

@property (nonatomic,retain,readonly) IKHeaderElement * header; 
@property (nonatomic,retain,readonly) NSArray * items; 
@property (nonatomic,retain,readonly) IKViewElement * footer; 
-(NSArray *)items;
-(IKHeaderElement *)header;
-(IKViewElement *)footer;
-(id)applyUpdatesWithElement:(id)arg1 ;
-(void)appDocumentDidMarkStylesDirty;
-(id)unboundItemElements;
@end

