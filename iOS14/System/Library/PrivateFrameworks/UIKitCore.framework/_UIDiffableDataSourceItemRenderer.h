/*
* Generated on Thursday, January 14, 2021 at 2:20:41 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/

#import <UIKitCore/UIKitCore-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString;

@interface _UIDiffableDataSourceItemRenderer : NSObject <NSCopying> {

	id _rendererIdentifier;
	Class _cellClass;
	NSString* _cellReuseIdentifier;
	/*^block*/id _handler;

}

@property (nonatomic,readonly) id rendererIdentifier;                       //@synthesize rendererIdentifier=_rendererIdentifier - In the implementation block
@property (nonatomic,readonly) Class cellClass;                             //@synthesize cellClass=_cellClass - In the implementation block
@property (nonatomic,readonly) NSString * cellReuseIdentifier;              //@synthesize cellReuseIdentifier=_cellReuseIdentifier - In the implementation block
@property (nonatomic,readonly) id handler;                                  //@synthesize handler=_handler - In the implementation block
-(Class)cellClass;
-(id)initWithIdentifier:(id)arg1 cellClass:(Class)arg2 handler:(/*^block*/id)arg3 cellReuseIdentifier:(id)arg4 ;
-(id)initWithIdentifier:(id)arg1 cellClass:(Class)arg2 handler:(/*^block*/id)arg3 ;
-(NSString *)cellReuseIdentifier;
-(id)handler;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)rendererIdentifier;
@end

