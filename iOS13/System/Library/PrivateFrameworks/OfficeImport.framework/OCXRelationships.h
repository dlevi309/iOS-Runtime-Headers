/*
* Generated on Monday, March 1, 2021 at 2:35:07 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
*/


@class NSString, NSMutableArray, NSMutableDictionary;

@interface OCXRelationships : NSObject {

	NSString* mPath;
	NSMutableArray* mRelationships;
	NSMutableDictionary* mRelationshipMap;
	unsigned long long mNextId;

}
-(BOOL)isEmpty;
-(id)path;
-(id)initWithPath:(id)arg1 ;
-(id)addRelationshipForKey:(id)arg1 type:(id)arg2 target:(id)arg3 external:(BOOL)arg4 ;
-(id)addRelationshipForKey:(id)arg1 type:(id)arg2 target:(id)arg3 ;
-(id)idForKey:(id)arg1 ;
-(id)targetForKey:(id)arg1 ;
-(void)writeRelationshipsToFilename:(id)arg1 stream:(id)arg2 ;
@end

