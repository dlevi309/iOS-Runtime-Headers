/*
* Generated on Thursday, January 14, 2021 at 2:22:17 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
*/


#import <PhotoLibraryServices/PhotoLibraryServices-Structs.h>
@interface PSIReusableObject : NSObject {

	BOOL _isPreparedForReuse;
	BOOL _isPreparingFromStatement;
	BOOL _isPreparedFromStatement;

}

@property (nonatomic,readonly) BOOL isPreparedFromStatement;              //@synthesize isPreparedFromStatement=_isPreparedFromStatement - In the implementation block
-(id)init;
-(void)prepareFromStatement:(sqlite3_stmtRef)arg1 ;
-(void)didPrepareFromStatement:(sqlite3_stmtRef)arg1 ;
-(void)prepareForReuse;
-(BOOL)isPreparedFromStatement;
@end

