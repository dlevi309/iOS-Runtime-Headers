/*
* Generated on Monday, March 1, 2021 at 2:33:02 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SearchUI.framework/SearchUI
*/

#import <libobjc.A.dylib/NSItemProviderWriting.h>

@class NSArray, SearchUIRowModel, NSString;

@interface SearchUIInternalDragObject : NSObject <NSItemProviderWriting> {

	SearchUIRowModel* _dragObject;

}

@property (retain) SearchUIRowModel * dragObject;                                                  //@synthesize dragObject=_dragObject - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,copy,readonly) NSArray * writableTypeIdentifiersForItemProvider; 
+(id)writableTypeIdentifiersForItemProvider;
-(NSArray *)writableTypeIdentifiersForItemProvider;
-(id)loadDataWithTypeIdentifier:(id)arg1 forItemProviderCompletionHandler:(/*^block*/id)arg2 ;
-(void)setDragObject:(SearchUIRowModel *)arg1 ;
-(SearchUIRowModel *)dragObject;
-(id)initWithDragObject:(id)arg1 ;
-(BOOL)shouldShareDragURL;
@end

