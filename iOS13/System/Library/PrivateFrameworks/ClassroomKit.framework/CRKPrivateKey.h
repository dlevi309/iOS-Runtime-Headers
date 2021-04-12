/*
* Generated on Monday, March 1, 2021 at 2:34:13 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/ClassroomKit.framework/ClassroomKit
*/

@class NSData;


@protocol CRKPrivateKey <CRKKeychainItem>
@property (nonatomic,copy,readonly) NSData * dataRepresentation; 
@property (nonatomic,readonly) _SecKey* underlyingPrivateKey; 
@required
-(NSData *)dataRepresentation;
-(_SecKey*)underlyingPrivateKey;

@end

