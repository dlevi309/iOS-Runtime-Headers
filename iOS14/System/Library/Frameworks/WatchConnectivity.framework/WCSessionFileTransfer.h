/*
* Generated on Thursday, January 14, 2021 at 2:27:04 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(long long)compare:(id)arg1 ;
-(WCSessionFile *)file;
-(NSProgress *)progress;
-(id)init;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithFile:(id)arg1 ;
-(id)description;
-(NSString *)transferIdentifier;
-(unsigned long long)hash;
-(id)initWithCoder:(id)arg1 ;
-(NSProgress *)internalProgress;
-(void)setInternalProgress:(NSProgress *)arg1 ;
-(void)cancel;
-(id)progressToken;
-(void)setProgressToken:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(void)setTransferIdentifier:(NSString *)arg1 ;
-(BOOL)isTransferring;
-(void)setTransferring:(BOOL)arg1 ;
-(NSError *)transferError;
-(void)setTransferError:(NSError *)arg1 ;
-(void)setTransferDate:(NSDate *)arg1 ;
-(NSDate *)transferDate;
-(void)initializeProgress;
@end

