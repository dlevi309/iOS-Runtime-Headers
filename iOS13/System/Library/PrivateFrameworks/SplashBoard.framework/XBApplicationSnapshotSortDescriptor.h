/*
* Generated on Monday, March 1, 2021 at 2:33:27 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SplashBoard.framework/SplashBoard
*/

#import <libobjc.A.dylib/BSDescriptionProviding.h>

@class NSSortDescriptor, NSString;

@interface XBApplicationSnapshotSortDescriptor : NSObject <BSDescriptionProviding> {

	unsigned long long _key;
	BOOL _ascending;
	/*^block*/id _comparator;

}

@property (assign,nonatomic) unsigned long long key;                             //@synthesize key=_key - In the implementation block
@property (assign,nonatomic) BOOL ascending;                                     //@synthesize ascending=_ascending - In the implementation block
@property (nonatomic,copy) id comparator;                                        //@synthesize comparator=_comparator - In the implementation block
@property (nonatomic,readonly) NSSortDescriptor * NSSortDescriptor; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)sortDescriptorWithKey:(unsigned long long)arg1 ascending:(BOOL)arg2 comparator:(/*^block*/id)arg3 ;
+(id)_propertyKeyForSnapshotKey:(unsigned long long)arg1 overriddenForNil:(BOOL*)arg2 ;
-(NSString *)description;
-(unsigned long long)key;
-(id)initWithKey:(unsigned long long)arg1 ascending:(BOOL)arg2 comparator:(/*^block*/id)arg3 ;
-(BOOL)ascending;
-(id)comparator;
-(void)setKey:(unsigned long long)arg1 ;
-(id)succinctDescription;
-(id)descriptionWithMultilinePrefix:(id)arg1 ;
-(id)succinctDescriptionBuilder;
-(id)descriptionBuilderWithMultilinePrefix:(id)arg1 ;
-(void)setAscending:(BOOL)arg1 ;
-(id)_stringForKey:(unsigned long long)arg1 ;
-(void)setComparator:(id)arg1 ;
-(NSSortDescriptor *)NSSortDescriptor;
@end

