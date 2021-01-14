/*
* Generated on Thursday, January 14, 2021 at 2:23:59 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/NotesShared.framework/NotesShared
*/


#import <NotesShared/NotesShared-Structs.h>
@class NSMutableOrderedSet, NSOrderedSet, NSDictionary;

@interface CRCoder : NSObject {

	NSMutableOrderedSet* _encodedObjects;
	Document* _currentDocument;
	NSOrderedSet* _clusterTypeSet;

}

@property (nonatomic,retain) NSMutableOrderedSet * encodedObjects;              //@synthesize encodedObjects=_encodedObjects - In the implementation block
@property (assign,nonatomic) Document* currentDocument;                         //@synthesize currentDocument=_currentDocument - In the implementation block
@property (nonatomic,readonly) NSOrderedSet * clusterTypeSet;                   //@synthesize clusterTypeSet=_clusterTypeSet - In the implementation block
@property (nonatomic,readonly) NSDictionary * typeToClassDict; 
@property (nonatomic,readonly) NSOrderedSet * typeSet; 
+(void)registerCRClasses;
+(void)registerClass:(Class)arg1 forType:(id)arg2 ;
+(void)_registerClass:(Class)arg1 forType:(id)arg2 cluster:(BOOL)arg3 ;
-(NSOrderedSet *)typeSet;
-(void)setCurrentDocument:(Document*)arg1 ;
-(void)setEncodedObjects:(NSMutableOrderedSet *)arg1 ;
-(Document*)currentDocument;
-(unsigned long long)typeIndexForClass:(Class)arg1 ;
-(NSMutableOrderedSet *)encodedObjects;
-(NSDictionary *)typeToClassDict;
-(NSOrderedSet *)clusterTypeSet;
@end

