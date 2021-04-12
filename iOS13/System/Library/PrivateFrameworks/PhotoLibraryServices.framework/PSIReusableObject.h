/*
* Generated on Monday, March 1, 2021 at 2:30:56 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(void)prepareForReuse;
-(void)prepareFromStatement:(sqlite3_stmtRef)arg1 ;
-(void)didPrepareFromStatement:(sqlite3_stmtRef)arg1 ;
-(BOOL)isPreparedFromStatement;
@end

