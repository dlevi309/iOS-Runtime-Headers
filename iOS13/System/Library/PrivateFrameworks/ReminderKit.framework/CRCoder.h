/*
* Generated on Monday, March 1, 2021 at 2:31:55 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/ReminderKit.framework/ReminderKit
*/


#import <ReminderKit/ReminderKit-Structs.h>
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
+(void)registerClass:(Class)arg1 forType:(id)arg2 ;
+(void)registerCRClasses;
+(void)_registerClass:(Class)arg1 forType:(id)arg2 cluster:(BOOL)arg3 ;
-(NSMutableOrderedSet *)encodedObjects;
-(void)setCurrentDocument:(Document*)arg1 ;
-(void)setEncodedObjects:(NSMutableOrderedSet *)arg1 ;
-(Document*)currentDocument;
-(NSOrderedSet *)typeSet;
-(unsigned long long)typeIndexForClass:(Class)arg1 ;
-(NSDictionary *)typeToClassDict;
-(NSOrderedSet *)clusterTypeSet;
@end

