/*
* Generated on Monday, March 1, 2021 at 2:35:17 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SlideshowKit.framework/Frameworks/OpusFoundation.framework/OpusFoundation
*/


#import <OpusFoundation/OpusFoundation-Structs.h>
@class OFMediaMetadataDatabaseCache, NSString, NSDate;

@interface OFMediaMetadataDatabaseCacheEntry : NSObject {

	OFMediaMetadataDatabaseCache* _context;
	long long _uniqueID;
	NSString* _identifier;
	NSDate* _creationDate;
	NSString* _name;
	BOOL _isFault;
	BOOL _isDirty;

}

@property (assign) BOOL isFault;                                        //@synthesize isFault=_isFault - In the implementation block
@property (assign) BOOL isDirty;                                        //@synthesize isDirty=_isDirty - In the implementation block
@property (assign) long long uniqueID;                                  //@synthesize uniqueID=_uniqueID - In the implementation block
@property (retain) OFMediaMetadataDatabaseCache * context;              //@synthesize context=_context - In the implementation block
@property (copy) NSString * identifier;                                 //@synthesize identifier=_identifier - In the implementation block
@property (retain) NSDate * creationDate;                               //@synthesize creationDate=_creationDate - In the implementation block
@property (copy) NSString * name;                                       //@synthesize name=_name - In the implementation block
-(id)init;
-(void)dealloc;
-(NSString *)name;
-(BOOL)isFault;
-(void)setName:(NSString *)arg1 ;
-(NSString *)identifier;
-(void)setIdentifier:(NSString *)arg1 ;
-(OFMediaMetadataDatabaseCache *)context;
-(long long)uniqueID;
-(void)save;
-(NSDate *)creationDate;
-(void)setContext:(OFMediaMetadataDatabaseCache *)arg1 ;
-(void)cleanup;
-(void)setCreationDate:(NSDate *)arg1 ;
-(void)update;
-(BOOL)isDirty;
-(void)setUniqueID:(long long)arg1 ;
-(void)setIsDirty:(BOOL)arg1 ;
-(id)initWithContext:(id)arg1 andStatement:(sqlite3_stmtRef)arg2 ;
-(void)updateWithStatement:(sqlite3_stmtRef)arg1 ;
-(void)setIsFault:(BOOL)arg1 ;
@end

