/*
* Generated on Thursday, January 14, 2021 at 2:24:05 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SearchUI.framework/SearchUI
*/

#import <libobjc.A.dylib/NSItemProviderWriting.h>

@class NSArray, SearchUIRowModel, NSString;

@interface SearchUIInternalDragObject : NSObject <NSItemProviderWriting> {

	SearchUIRowModel* _dragObject;

}

@property (retain) SearchUIRowModel * dragObject;                                                  //@synthesize dragObject=_dragObject - In the implementation block
@property (nonatomic,copy,readonly) NSArray * writableTypeIdentifiersForItemProvider; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)writableTypeIdentifiersForItemProvider;
-(id)loadDataWithTypeIdentifier:(id)arg1 forItemProviderCompletionHandler:(/*^block*/id)arg2 ;
-(SearchUIRowModel *)dragObject;
-(id)initWithDragObject:(id)arg1 ;
-(NSArray *)writableTypeIdentifiersForItemProvider;
-(BOOL)shouldShareDragURL;
-(void)setDragObject:(SearchUIRowModel *)arg1 ;
@end

