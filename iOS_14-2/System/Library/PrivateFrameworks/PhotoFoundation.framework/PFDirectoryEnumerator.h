/*
* Generated on Thursday, January 14, 2021 at 2:22:12 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PhotoFoundation.framework/PhotoFoundation
*/

#import <PhotoFoundation/PhotoFoundation-Structs.h>
#import <CoreFoundation/NSEnumerator.h>
#import <libobjc.A.dylib/NSCopying.h>

@protocol PFFileFilter;
@class NSString, NSMutableArray;

@interface PFDirectoryEnumerator : NSEnumerator <NSCopying> {

	SCD_Struct_PF4* _DIR;
	NSString* _path;
	id<PFFileFilter> _filterDelegate;
	int _fileType;
	BOOL _recursive;
	NSMutableArray* _recursiveDirArray;
	int _recursionMode;
	int _options;
	BOOL _enumerationFinished;

}

@property (nonatomic,readonly) NSString * path;                              //@synthesize path=_path - In the implementation block
@property (nonatomic,readonly) int fileType;                                 //@synthesize fileType=_fileType - In the implementation block
@property (nonatomic,readonly) id<PFFileFilter> filterDelegate;              //@synthesize filterDelegate=_filterDelegate - In the implementation block
@property (nonatomic,readonly) int options;                                  //@synthesize options=_options - In the implementation block
-(id)nextObject;
-(id)initWithPath:(id)arg1 ;
-(int)options;
-(NSString *)path;
-(id)allObjects;
-(id)description;
-(id<PFFileFilter>)filterDelegate;
-(id)initWithPath:(id)arg1 filterDelegate:(id)arg2 fileType:(int)arg3 recursive:(BOOL)arg4 mode:(int)arg5 options:(int)arg6 ;
-(id)initWithPath:(id)arg1 filterDelegate:(id)arg2 fileType:(int)arg3 ;
-(id)initWithPath:(id)arg1 filterDelegate:(id)arg2 ;
-(id)initWithPath:(id)arg1 recursive:(BOOL)arg2 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)dealloc;
-(int)fileType;
@end

