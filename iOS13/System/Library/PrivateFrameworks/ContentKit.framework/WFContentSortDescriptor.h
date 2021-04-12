/*
* Generated on Monday, March 1, 2021 at 2:34:22 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/ContentKit.framework/ContentKit
*/

#import <libobjc.A.dylib/WFContentPropertyContainer.h>

@class WFContentProperty, NSSet;

@interface WFContentSortDescriptor : NSObject <WFContentPropertyContainer> {

	BOOL _ascending;
	WFContentProperty* _property;
	/*^block*/id _comparator;

}

@property (nonatomic,readonly) WFContentProperty * property;              //@synthesize property=_property - In the implementation block
@property (nonatomic,copy,readonly) id comparator;                        //@synthesize comparator=_comparator - In the implementation block
@property (nonatomic,readonly) BOOL ascending;                            //@synthesize ascending=_ascending - In the implementation block
@property (nonatomic,readonly) NSSet * containedProperties; 
+(id)sortDescriptorWithProperty:(id)arg1 ascending:(BOOL)arg2 comparator:(/*^block*/id)arg3 ;
+(id)randomSortDescriptor;
-(id)description;
-(BOOL)ascending;
-(id)comparator;
-(WFContentProperty *)property;
-(NSSet *)containedProperties;
-(id)initWithProperty:(id)arg1 ascending:(BOOL)arg2 comparator:(/*^block*/id)arg3 ;
@end

