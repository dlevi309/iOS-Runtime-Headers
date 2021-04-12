/*
* Generated on Thursday, January 14, 2021 at 2:24:32 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/MusicLibrary.framework/MusicLibrary
*/

#import <MusicLibrary/MusicLibrary-Structs.h>
#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString;

@interface ML3ClientImportSessionConfiguration : NSObject <NSSecureCoding, NSCopying> {

	BOOL _allowAccountMerging;
	int _sourceType;
	NSString* _libraryPath;
	unsigned long long _operationCount;

}

@property (nonatomic,copy) NSString * libraryPath;                           //@synthesize libraryPath=_libraryPath - In the implementation block
@property (assign,nonatomic) int sourceType;                                 //@synthesize sourceType=_sourceType - In the implementation block
@property (assign,nonatomic) unsigned long long operationCount;              //@synthesize operationCount=_operationCount - In the implementation block
@property (assign,nonatomic) BOOL allowAccountMerging;                       //@synthesize allowAccountMerging=_allowAccountMerging - In the implementation block
+(BOOL)supportsSecureCoding;
-(int)sourceType;
-(id)init;
-(void)encodeWithCoder:(id)arg1 ;
-(void)setSourceType:(int)arg1 ;
-(unsigned long long)operationCount;
-(id)initWithCoder:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSString *)libraryPath;
-(BOOL)allowAccountMerging;
-(void)setLibraryPath:(NSString *)arg1 ;
-(void)setOperationCount:(unsigned long long)arg1 ;
-(void)setAllowAccountMerging:(BOOL)arg1 ;
@end

