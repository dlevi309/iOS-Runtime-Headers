/*
* Generated on Monday, March 1, 2021 at 2:34:21 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/ContentKit.framework/ContentKit
*/


@class NSMutableDictionary;

@interface WFSerializableContentProvider : NSObject {

	NSMutableDictionary* _entriesForClassNames;

}

@property (nonatomic,readonly) NSMutableDictionary * entriesForClassNames;              //@synthesize entriesForClassNames=_entriesForClassNames - In the implementation block
+(id)sharedProvider;
-(id)init;
-(id)serializedRepresentationForObject:(id)arg1 ;
-(id)objectOfClass:(Class)arg1 withSerializedRepresentation:(id)arg2 ;
-(id)entryConsideringSuperclassesForClass:(Class)arg1 ;
-(void)registerSerializableContentClasses;
-(NSMutableDictionary *)entriesForClassNames;
@end

