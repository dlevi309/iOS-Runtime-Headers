/*
* Generated on Monday, March 1, 2021 at 2:30:06 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/ManagedConfiguration.framework/ManagedConfiguration
*/

#import <ManagedConfiguration/ManagedConfiguration-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString, NSNumber;

@interface MCBook : NSObject <NSCopying> {

	NSString* _author;
	NSString* _title;
	NSString* _kind;
	NSString* _fullPath;
	NSString* _version;
	NSString* _persistentID;
	NSNumber* _iTunesStoreID;
	NSString* _buyParams;
	NSString* _state;
	NSNumber* _downloadIdentifier;
	MCBook* _previousVersion;

}

@property (nonatomic,copy) NSString * author;                            //@synthesize author=_author - In the implementation block
@property (nonatomic,copy) NSString * title;                             //@synthesize title=_title - In the implementation block
@property (nonatomic,copy) NSString * kind;                              //@synthesize kind=_kind - In the implementation block
@property (nonatomic,copy) NSString * fullPath;                          //@synthesize fullPath=_fullPath - In the implementation block
@property (nonatomic,copy) NSString * version;                           //@synthesize version=_version - In the implementation block
@property (nonatomic,copy) NSString * persistentID;                      //@synthesize persistentID=_persistentID - In the implementation block
@property (nonatomic,retain) NSNumber * iTunesStoreID;                   //@synthesize iTunesStoreID=_iTunesStoreID - In the implementation block
@property (nonatomic,copy) NSString * buyParams;                         //@synthesize buyParams=_buyParams - In the implementation block
@property (nonatomic,retain) NSString * state;                           //@synthesize state=_state - In the implementation block
@property (nonatomic,retain) NSNumber * downloadIdentifier;              //@synthesize downloadIdentifier=_downloadIdentifier - In the implementation block
@property (nonatomic,retain) MCBook * previousVersion;                   //@synthesize previousVersion=_previousVersion - In the implementation block
-(id)init;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSString *)version;
-(void)setVersion:(NSString *)arg1 ;
-(NSString *)state;
-(NSString *)title;
-(void)setTitle:(NSString *)arg1 ;
-(NSString *)kind;
-(void)setKind:(NSString *)arg1 ;
-(void)setState:(NSString *)arg1 ;
-(id)friendlyName;
-(id)initWithManifestDictionary:(id)arg1 ;
-(NSString *)author;
-(void)setAuthor:(NSString *)arg1 ;
-(NSString *)fullPath;
-(void)setFullPath:(NSString *)arg1 ;
-(NSString *)persistentID;
-(void)setPersistentID:(NSString *)arg1 ;
-(NSNumber *)iTunesStoreID;
-(void)setITunesStoreID:(NSNumber *)arg1 ;
-(NSString *)buyParams;
-(void)setBuyParams:(NSString *)arg1 ;
-(NSNumber *)downloadIdentifier;
-(void)setDownloadIdentifier:(NSNumber *)arg1 ;
-(id)manifestDictionary;
-(void)updateBookAttributesByCopyingFromBook:(id)arg1 ;
-(MCBook *)previousVersion;
-(void)setPreviousVersion:(MCBook *)arg1 ;
@end

