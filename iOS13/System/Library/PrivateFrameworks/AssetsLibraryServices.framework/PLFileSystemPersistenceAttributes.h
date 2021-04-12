/*
* Generated on Monday, March 1, 2021 at 2:32:23 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/AssetsLibraryServices.framework/AssetsLibraryServices
*/


@class NSDictionary;

@interface PLFileSystemPersistenceAttributes : NSObject {

	NSDictionary* _attributes;
	NSDictionary* _unknownAttributes;

}
-(void)dealloc;
-(id)description;
-(id)stringForKey:(id)arg1 ;
-(id)dataForKey:(id)arg1 ;
-(id)UUIDStringForKey:(id)arg1 ;
-(BOOL)getInt32:(int*)arg1 forKey:(id)arg2 ;
-(BOOL)getUInt64:(unsigned long long*)arg1 forKey:(id)arg2 ;
-(BOOL)getUInt16:(unsigned short*)arg1 forKey:(id)arg2 ;
-(id)initWithAttributes:(id)arg1 unknownAttributes:(id)arg2 ;
@end

