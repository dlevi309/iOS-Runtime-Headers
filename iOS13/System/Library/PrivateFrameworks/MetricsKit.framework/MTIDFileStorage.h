/*
* Generated on Monday, March 1, 2021 at 2:35:03 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/MetricsKit.framework/MetricsKit
*/

#import <libobjc.A.dylib/MTIDStorage.h>

@class NSString, NSMutableDictionary, NSArray;

@interface MTIDFileStorage : NSObject <MTIDStorage> {

	BOOL _shouldDisableChangeNotifications;
	NSString* _path;
	NSMutableDictionary* _namespaceFiles;
	NSArray* _entitledNamespaces;

}

@property (nonatomic,retain) NSString * path;                                    //@synthesize path=_path - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * namespaceFiles;               //@synthesize namespaceFiles=_namespaceFiles - In the implementation block
@property (nonatomic,retain) NSArray * entitledNamespaces;                       //@synthesize entitledNamespaces=_entitledNamespaces - In the implementation block
@property (assign,nonatomic) BOOL shouldDisableChangeNotifications;              //@synthesize shouldDisableChangeNotifications=_shouldDisableChangeNotifications - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(NSString *)path;
-(id)initWithPath:(id)arg1 ;
-(void)setPath:(NSString *)arg1 ;
-(id)updateNamespace:(id)arg1 options:(id)arg2 resetSeed:(BOOL)arg3 ;
-(id)deleteNamespace:(id)arg1 ;
-(id)optionsForNamespace:(id)arg1 cachePolicy:(long long)arg2 ;
-(id)initWithPath:(id)arg1 shouldDisableChangeNotifications:(BOOL)arg2 ;
-(void)setNamespaceFiles:(NSMutableDictionary *)arg1 ;
-(void)setShouldDisableChangeNotifications:(BOOL)arg1 ;
-(id)fileForNamespace:(id)arg1 error:(id*)arg2 ;
-(NSMutableDictionary *)namespaceFiles;
-(BOOL)isEntitledNamespace:(id)arg1 ;
-(id)fileNameForNamespace:(id)arg1 ;
-(BOOL)shouldDisableChangeNotifications;
-(NSArray *)entitledNamespaces;
-(void)setEntitledNamespaces:(NSArray *)arg1 ;
@end

