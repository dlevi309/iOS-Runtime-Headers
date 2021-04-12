/*
* Generated on Thursday, January 14, 2021 at 2:21:17 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
*/


@protocol MPServerObjectDatabaseOperations <NSObject>
@required
-(BOOL)importAssetURL:(id)arg1 forIdentifiers:(id)arg2 flavor:(long long)arg3;
-(BOOL)importObject:(id)arg1 type:(id)arg2 identifiers:(id)arg3 source:(long long)arg4 expiration:(id)arg5;
-(BOOL)removeRelationshipsForParentIdentifiers:(id)arg1 childKey:(id)arg2;
-(BOOL)importAssetMiniSINF:(id)arg1 forIdentifier:(id)arg2 hashedPersonID:(id)arg3 flavor:(long long)arg4;
-(BOOL)relateIdentifiers:(id)arg1 toParentIdentifiers:(id)arg2 childKey:(id)arg3 order:(long long)arg4;

@end

