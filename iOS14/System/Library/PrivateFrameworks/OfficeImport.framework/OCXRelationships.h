/*
* Generated on Thursday, January 14, 2021 at 2:28:07 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
*/


@class NSString, NSMutableArray, NSMutableDictionary;

@interface OCXRelationships : NSObject {

	NSString* mPath;
	NSMutableArray* mRelationships;
	NSMutableDictionary* mRelationshipMap;
	unsigned long long mNextId;

}
-(id)initWithPath:(id)arg1 ;
-(id)path;
-(BOOL)isEmpty;
-(id)addRelationshipForKey:(id)arg1 type:(id)arg2 target:(id)arg3 external:(BOOL)arg4 ;
-(id)addRelationshipForKey:(id)arg1 type:(id)arg2 target:(id)arg3 ;
-(id)idForKey:(id)arg1 ;
-(id)targetForKey:(id)arg1 ;
-(void)writeRelationshipsToFilename:(id)arg1 stream:(id)arg2 ;
@end

