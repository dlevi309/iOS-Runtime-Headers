/*
* Generated on Thursday, January 14, 2021 at 2:24:32 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/MusicLibrary.framework/MusicLibrary
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSDictionary;

@interface ML3ClientImportResult : NSObject <NSSecureCoding> {

	BOOL _success;
	NSDictionary* _resultingDatabasePersistentIDs;

}

@property (nonatomic,readonly) BOOL success;                                                    //@synthesize success=_success - In the implementation block
@property (nonatomic,copy,readonly) NSDictionary * resultingDatabasePersistentIDs;              //@synthesize resultingDatabasePersistentIDs=_resultingDatabasePersistentIDs - In the implementation block
+(BOOL)supportsSecureCoding;
-(BOOL)success;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)initWithSuccess:(BOOL)arg1 resultingDatabasePersistentIDs:(id)arg2 ;
-(NSDictionary *)resultingDatabasePersistentIDs;
@end

