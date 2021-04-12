/*
* Generated on Monday, March 1, 2021 at 2:33:24 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/CloudPhotoLibrary.framework/CloudPhotoLibrary
*/

#import <CloudPhotoLibrary/CloudPhotoLibrary-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class CPLResourceIdentity, NSDate;

@interface CPLFileStorageItem : NSObject <NSCopying> {

	BOOL _original;
	BOOL _markedForDelete;
	CPLResourceIdentity* _identity;
	NSDate* _lastAccessDate;

}

@property (nonatomic,readonly) CPLResourceIdentity * identity;                             //@synthesize identity=_identity - In the implementation block
@property (getter=isOriginal,nonatomic,readonly) BOOL original;                            //@synthesize original=_original - In the implementation block
@property (getter=isMarkedForDelete,nonatomic,readonly) BOOL markedForDelete;              //@synthesize markedForDelete=_markedForDelete - In the implementation block
@property (nonatomic,readonly) NSDate * lastAccessDate;                                    //@synthesize lastAccessDate=_lastAccessDate - In the implementation block
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)getResourceValue:(out id*)arg1 forKey:(id)arg2 error:(out id*)arg3 ;
-(CPLResourceIdentity *)identity;
-(BOOL)isOriginal;
-(NSDate *)lastAccessDate;
-(BOOL)isMarkedForDelete;
-(id)initWithIdentity:(id)arg1 original:(BOOL)arg2 markedForDelete:(BOOL)arg3 lastAccessDate:(id)arg4 ;
@end

