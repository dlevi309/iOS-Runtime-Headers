/*
* Generated on Thursday, January 14, 2021 at 2:25:40 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/Transparency.framework/Transparency
*/

#import <CoreData/NSManagedObject.h>

@class NSString, NSUUID, NSData, KTRequest;

@interface DownloadRecord : NSManagedObject

@property (nonatomic,copy) NSString * application; 
@property (nonatomic,copy) NSUUID * downloadId; 
@property (assign,nonatomic) long long downloadType; 
@property (nonatomic,retain) NSData * requestData; 
@property (assign,nonatomic) double requestTime; 
@property (nonatomic,retain) NSData * response; 
@property (nonatomic,retain) NSData * revisions; 
@property (nonatomic,copy) NSString * serverHint; 
@property (assign,nonatomic) long long startSLHRevision; 
@property (nonatomic,retain) KTRequest * ktRequest; 
@property (nonatomic,retain) KTRequest * smtRequest; 
+(id)fetchRequest;
-(BOOL)expired;
@end

