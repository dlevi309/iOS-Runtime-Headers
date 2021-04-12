/*
* Generated on Monday, March 1, 2021 at 2:33:23 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/WatchConnectivity.framework/WatchConnectivity
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class WCSessionFile, NSProgress, NSDate, NSString, NSError;

@interface WCSessionFileTransfer : NSObject <NSSecureCoding> {

	BOOL _transferring;
	WCSessionFile* _file;
	NSProgress* _progress;
	NSDate* _transferDate;
	NSString* _transferIdentifier;
	NSError* _transferError;
	NSProgress* _internalProgress;
	id _progressToken;

}

@property (nonatomic,retain) NSDate * transferDate;                                //@synthesize transferDate=_transferDate - In the implementation block
@property (copy) NSString * transferIdentifier;                                    //@synthesize transferIdentifier=_transferIdentifier - In the implementation block
@property (assign,getter=isTransferring,nonatomic) BOOL transferring;              //@synthesize transferring=_transferring - In the implementation block
@property (retain) NSError * transferError;                                        //@synthesize transferError=_transferError - In the implementation block
@property (retain) NSProgress * internalProgress;                                  //@synthesize internalProgress=_internalProgress - In the implementation block
@property (retain) id progressToken;                                               //@synthesize progressToken=_progressToken - In the implementation block
@property (nonatomic,readonly) WCSessionFile * file;                               //@synthesize file=_file - In the implementation block
@property (nonatomic,readonly) NSProgress * progress;                              //@synthesize progress=_progress - In the implementation block
+(BOOL)supportsSecureCoding;
-(id)init;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(long long)compare:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)cancel;
-(NSProgress *)progress;
-(WCSessionFile *)file;
-(id)initWithFile:(id)arg1 ;
-(NSString *)transferIdentifier;
-(id)progressToken;
-(void)setProgressToken:(id)arg1 ;
-(NSProgress *)internalProgress;
-(void)setInternalProgress:(NSProgress *)arg1 ;
-(void)setTransferIdentifier:(NSString *)arg1 ;
-(BOOL)isTransferring;
-(void)setTransferring:(BOOL)arg1 ;
-(NSError *)transferError;
-(void)setTransferError:(NSError *)arg1 ;
-(void)setTransferDate:(NSDate *)arg1 ;
-(NSDate *)transferDate;
-(void)initializeProgress;
@end

