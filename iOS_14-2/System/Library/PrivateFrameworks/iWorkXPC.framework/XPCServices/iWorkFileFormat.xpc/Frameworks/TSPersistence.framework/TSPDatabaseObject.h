/*
* Generated on Thursday, January 14, 2021 at 2:28:54 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/iWorkXPC.framework/XPCServices/iWorkFileFormat.xpc/Frameworks/TSPersistence.framework/TSPersistence
*/


@class NSString, NSURL;

@interface TSPDatabaseObject : NSObject {

	int _classType;
	long long _identifier;

}

@property (nonatomic,readonly) long long identifier;              //@synthesize identifier=_identifier - In the implementation block
@property (nonatomic,readonly) int classType;                     //@synthesize classType=_classType - In the implementation block
@property (nonatomic,readonly) BOOL hasDataState; 
@property (nonatomic,readonly) long long dataState; 
@property (nonatomic,readonly) BOOL hasFileState; 
@property (nonatomic,readonly) NSString * fileState; 
@property (nonatomic,readonly) NSURL * fileURL; 
+(id)databaseObjectWithIdentifier:(long long)arg1 classType:(int)arg2 dataState:(long long)arg3 ;
+(id)databaseObjectWithIdentifier:(long long)arg1 classType:(int)arg2 fileState:(id)arg3 packageURL:(id)arg4 ;
-(id)init;
-(NSURL *)fileURL;
-(int)classType;
-(long long)dataState;
-(long long)identifier;
-(BOOL)hasDataState;
-(id)initWithIdentifier:(long long)arg1 classType:(int)arg2 ;
-(BOOL)hasFileState;
-(NSString *)fileState;
@end

