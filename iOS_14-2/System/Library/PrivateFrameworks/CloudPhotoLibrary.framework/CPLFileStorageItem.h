/*
* Generated on Thursday, January 14, 2021 at 2:24:31 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(BOOL)getResourceValue:(out id*)arg1 forKey:(id)arg2 error:(out id*)arg3 ;
-(NSDate *)lastAccessDate;
-(CPLResourceIdentity *)identity;
-(id)description;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(BOOL)isOriginal;
-(BOOL)isMarkedForDelete;
-(id)initWithIdentity:(id)arg1 original:(BOOL)arg2 markedForDelete:(BOOL)arg3 lastAccessDate:(id)arg4 ;
@end

