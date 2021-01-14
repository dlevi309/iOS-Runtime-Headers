/*
* Generated on Thursday, January 14, 2021 at 2:26:47 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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

