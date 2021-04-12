/*
* Generated on Thursday, January 14, 2021 at 2:28:29 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(void)setUniqueID:(long long)arg1 ;
-(long long)uniqueID;
-(BOOL)isDirty;
-(id)init;
-(void)save;
-(void)setCreationDate:(NSDate *)arg1 ;
-(OFMediaMetadataDatabaseCache *)context;
-(NSString *)name;
-(void)update;
-(NSDate *)creationDate;
-(void)cleanup;
-(BOOL)isFault;
-(void)setName:(NSString *)arg1 ;
-(void)setIdentifier:(NSString *)arg1 ;
-(NSString *)identifier;
-(void)setIsDirty:(BOOL)arg1 ;
-(void)dealloc;
-(void)setContext:(OFMediaMetadataDatabaseCache *)arg1 ;
-(id)initWithContext:(id)arg1 andStatement:(sqlite3_stmtRef)arg2 ;
-(void)updateWithStatement:(sqlite3_stmtRef)arg1 ;
-(void)setIsFault:(BOOL)arg1 ;
@end

