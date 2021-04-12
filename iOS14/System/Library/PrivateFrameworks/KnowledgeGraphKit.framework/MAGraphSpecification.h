/*
* Generated on Thursday, January 14, 2021 at 2:27:50 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/KnowledgeGraphKit.framework/KnowledgeGraphKit
*/

#import <KnowledgeGraphKit/KnowledgeGraphKit-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class MAGraphReference;

@interface MAGraphSpecification : NSObject <NSCopying> {

	long long _persistenceOptions;
	Class _defaultNodeClass;
	Class _defaultEdgeClass;
	MAGraphReference* _rootGraphReference;

}

@property (assign) long long persistenceOptions;                                 //@synthesize persistenceOptions=_persistenceOptions - In the implementation block
@property (retain) Class defaultNodeClass;                                       //@synthesize defaultNodeClass=_defaultNodeClass - In the implementation block
@property (retain) Class defaultEdgeClass;                                       //@synthesize defaultEdgeClass=_defaultEdgeClass - In the implementation block
@property (nonatomic,retain) MAGraphReference * rootGraphReference;              //@synthesize rootGraphReference=_rootGraphReference - In the implementation block
-(id)init;
-(void)enumerateNodeClassesUsingBlock:(/*^block*/id)arg1 ;
-(Class)nodeClassWithLabel:(id)arg1 domain:(unsigned short)arg2 ;
-(Class)edgeClassWithLabel:(id)arg1 domain:(unsigned short)arg2 ;
-(void)setPersistenceOptions:(long long)arg1 ;
-(void)enumerateEdgeClassesUsingBlock:(/*^block*/id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(Class)defaultEdgeClass;
-(Class)defaultNodeClass;
-(void)setDefaultEdgeClass:(Class)arg1 ;
-(void)setDefaultNodeClass:(Class)arg1 ;
-(long long)persistenceOptions;
-(MAGraphReference *)rootGraphReference;
-(void)setRootGraphReference:(MAGraphReference *)arg1 ;
@end

