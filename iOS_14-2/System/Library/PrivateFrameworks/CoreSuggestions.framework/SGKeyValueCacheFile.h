/*
* Generated on Thursday, January 14, 2021 at 2:22:01 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CoreSuggestions.framework/CoreSuggestions
*/

#import <CoreSuggestions/CoreSuggestions-Structs.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSData, NSString, NSMutableData;

@interface SGKeyValueCacheFile : NSObject <NSSecureCoding> {

	opaque_pthread_mutex_t _lock;
	NSData* _data;
	int _fd;
	NSString* _tmpDir;
	NSString* _tmpPath;
	NSString* _tmpDest;
	NSMutableData* _memStore;

}
+(BOOL)supportsSecureCoding;
+(id)fullNameForEncodedContact:(id)arg1 ;
+(id)encodedStringForFullName:(id)arg1 ;
-(void)deleteValueByRecordId:(id)arg1 ;
-(id)initInMemory;
-(id)init;
-(void)setValueIfNotPresent:(id)arg1 forKey:(id)arg2 fromRecordId:(id)arg3 ;
-(id)valueForKey:(id)arg1 found:(BOOL*)arg2 ;
-(id)initWithPath:(id)arg1 ;
-(id)valueForKey:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithFileDescriptor:(int)arg1 ;
-(void)setValue:(id)arg1 forKey:(id)arg2 fromRecordId:(id)arg3 ;
-(id)description;
-(void)deleteValueByRecordIdSet:(id)arg1 ;
-(id)initTemporaryForOverwritingPath:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)initBlank;
-(void)dealloc;
-(id)_map;
-(void)commitTemporaryFile;
@end

